/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 7.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGRTTYModSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGRTTYModSettings::SWGRTTYModSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRTTYModSettings::SWGRTTYModSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    baud = 0.0f;
    m_baud_isSet = false;
    rf_bandwidth = 0;
    m_rf_bandwidth_isSet = false;
    frequency_shift = 0;
    m_frequency_shift_isSet = false;
    gain = 0.0f;
    m_gain_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    repeat = 0;
    m_repeat_isSet = false;
    repeat_count = 0;
    m_repeat_count_isSet = false;
    lpf_taps = 0;
    m_lpf_taps_isSet = false;
    bb_noise = 0;
    m_bb_noise_isSet = false;
    rf_noise = 0;
    m_rf_noise_isSet = false;
    text = nullptr;
    m_text_isSet = false;
    pulse_shaping = 0;
    m_pulse_shaping_isSet = false;
    beta = 0.0f;
    m_beta_isSet = false;
    symbol_span = 0;
    m_symbol_span_isSet = false;
    character_set = 0;
    m_character_set_isSet = false;
    unshift_on_space = 0;
    m_unshift_on_space_isSet = false;
    msb_first = 0;
    m_msb_first_isSet = false;
    space_high = 0;
    m_space_high_isSet = false;
    prefix_crlf = nullptr;
    m_prefix_crlf_isSet = false;
    postfix_crlf = nullptr;
    m_postfix_crlf_isSet = false;
    udp_enabled = 0;
    m_udp_enabled_isSet = false;
    udp_address = nullptr;
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    channel_marker = nullptr;
    m_channel_marker_isSet = false;
    rollup_state = nullptr;
    m_rollup_state_isSet = false;
}

SWGRTTYModSettings::~SWGRTTYModSettings() {
    this->cleanup();
}

void
SWGRTTYModSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    baud = 0.0f;
    m_baud_isSet = false;
    rf_bandwidth = 0;
    m_rf_bandwidth_isSet = false;
    frequency_shift = 0;
    m_frequency_shift_isSet = false;
    gain = 0.0f;
    m_gain_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    repeat = 0;
    m_repeat_isSet = false;
    repeat_count = 0;
    m_repeat_count_isSet = false;
    lpf_taps = 0;
    m_lpf_taps_isSet = false;
    bb_noise = 0;
    m_bb_noise_isSet = false;
    rf_noise = 0;
    m_rf_noise_isSet = false;
    text = new QString("");
    m_text_isSet = false;
    pulse_shaping = 0;
    m_pulse_shaping_isSet = false;
    beta = 0.0f;
    m_beta_isSet = false;
    symbol_span = 0;
    m_symbol_span_isSet = false;
    character_set = 0;
    m_character_set_isSet = false;
    unshift_on_space = 0;
    m_unshift_on_space_isSet = false;
    msb_first = 0;
    m_msb_first_isSet = false;
    space_high = 0;
    m_space_high_isSet = false;
    prefix_crlf = new QString("");
    m_prefix_crlf_isSet = false;
    postfix_crlf = new QString("");
    m_postfix_crlf_isSet = false;
    udp_enabled = 0;
    m_udp_enabled_isSet = false;
    udp_address = new QString("");
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    channel_marker = new SWGChannelMarker();
    m_channel_marker_isSet = false;
    rollup_state = new SWGRollupState();
    m_rollup_state_isSet = false;
}

void
SWGRTTYModSettings::cleanup() {











    if(text != nullptr) { 
        delete text;
    }







    if(prefix_crlf != nullptr) { 
        delete prefix_crlf;
    }
    if(postfix_crlf != nullptr) { 
        delete postfix_crlf;
    }

    if(udp_address != nullptr) { 
        delete udp_address;
    }


    if(title != nullptr) { 
        delete title;
    }


    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



    if(channel_marker != nullptr) { 
        delete channel_marker;
    }
    if(rollup_state != nullptr) { 
        delete rollup_state;
    }
}

SWGRTTYModSettings*
SWGRTTYModSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRTTYModSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&baud, pJson["baud"], "float", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "qint32", "");
    
    ::SWGSDRangel::setValue(&frequency_shift, pJson["frequencyShift"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain, pJson["gain"], "float", "");
    
    ::SWGSDRangel::setValue(&channel_mute, pJson["channelMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&repeat, pJson["repeat"], "qint32", "");
    
    ::SWGSDRangel::setValue(&repeat_count, pJson["repeatCount"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_taps, pJson["lpfTaps"], "qint32", "");
    
    ::SWGSDRangel::setValue(&bb_noise, pJson["bbNoise"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rf_noise, pJson["rfNoise"], "qint32", "");
    
    ::SWGSDRangel::setValue(&text, pJson["text"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&pulse_shaping, pJson["pulseShaping"], "qint32", "");
    
    ::SWGSDRangel::setValue(&beta, pJson["beta"], "float", "");
    
    ::SWGSDRangel::setValue(&symbol_span, pJson["symbolSpan"], "qint32", "");
    
    ::SWGSDRangel::setValue(&character_set, pJson["characterSet"], "qint32", "");
    
    ::SWGSDRangel::setValue(&unshift_on_space, pJson["unshiftOnSpace"], "qint32", "");
    
    ::SWGSDRangel::setValue(&msb_first, pJson["msbFirst"], "qint32", "");
    
    ::SWGSDRangel::setValue(&space_high, pJson["spaceHigh"], "qint32", "");
    
    ::SWGSDRangel::setValue(&prefix_crlf, pJson["prefixCRLF"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&postfix_crlf, pJson["postfixCRLF"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&udp_enabled, pJson["udpEnabled"], "qint32", "");
    
    ::SWGSDRangel::setValue(&udp_address, pJson["udpAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&udp_port, pJson["udpPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&channel_marker, pJson["channelMarker"], "SWGChannelMarker", "SWGChannelMarker");
    
    ::SWGSDRangel::setValue(&rollup_state, pJson["rollupState"], "SWGRollupState", "SWGRollupState");
    
}

QString
SWGRTTYModSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGRTTYModSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_baud_isSet){
        obj->insert("baud", QJsonValue(baud));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_frequency_shift_isSet){
        obj->insert("frequencyShift", QJsonValue(frequency_shift));
    }
    if(m_gain_isSet){
        obj->insert("gain", QJsonValue(gain));
    }
    if(m_channel_mute_isSet){
        obj->insert("channelMute", QJsonValue(channel_mute));
    }
    if(m_repeat_isSet){
        obj->insert("repeat", QJsonValue(repeat));
    }
    if(m_repeat_count_isSet){
        obj->insert("repeatCount", QJsonValue(repeat_count));
    }
    if(m_lpf_taps_isSet){
        obj->insert("lpfTaps", QJsonValue(lpf_taps));
    }
    if(m_bb_noise_isSet){
        obj->insert("bbNoise", QJsonValue(bb_noise));
    }
    if(m_rf_noise_isSet){
        obj->insert("rfNoise", QJsonValue(rf_noise));
    }
    if(text != nullptr && *text != QString("")){
        toJsonValue(QString("text"), text, obj, QString("QString"));
    }
    if(m_pulse_shaping_isSet){
        obj->insert("pulseShaping", QJsonValue(pulse_shaping));
    }
    if(m_beta_isSet){
        obj->insert("beta", QJsonValue(beta));
    }
    if(m_symbol_span_isSet){
        obj->insert("symbolSpan", QJsonValue(symbol_span));
    }
    if(m_character_set_isSet){
        obj->insert("characterSet", QJsonValue(character_set));
    }
    if(m_unshift_on_space_isSet){
        obj->insert("unshiftOnSpace", QJsonValue(unshift_on_space));
    }
    if(m_msb_first_isSet){
        obj->insert("msbFirst", QJsonValue(msb_first));
    }
    if(m_space_high_isSet){
        obj->insert("spaceHigh", QJsonValue(space_high));
    }
    if(prefix_crlf != nullptr && *prefix_crlf != QString("")){
        toJsonValue(QString("prefixCRLF"), prefix_crlf, obj, QString("QString"));
    }
    if(postfix_crlf != nullptr && *postfix_crlf != QString("")){
        toJsonValue(QString("postfixCRLF"), postfix_crlf, obj, QString("QString"));
    }
    if(m_udp_enabled_isSet){
        obj->insert("udpEnabled", QJsonValue(udp_enabled));
    }
    if(udp_address != nullptr && *udp_address != QString("")){
        toJsonValue(QString("udpAddress"), udp_address, obj, QString("QString"));
    }
    if(m_udp_port_isSet){
        obj->insert("udpPort", QJsonValue(udp_port));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(m_stream_index_isSet){
        obj->insert("streamIndex", QJsonValue(stream_index));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }
    if((channel_marker != nullptr) && (channel_marker->isSet())){
        toJsonValue(QString("channelMarker"), channel_marker, obj, QString("SWGChannelMarker"));
    }
    if((rollup_state != nullptr) && (rollup_state->isSet())){
        toJsonValue(QString("rollupState"), rollup_state, obj, QString("SWGRollupState"));
    }

    return obj;
}

qint64
SWGRTTYModSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGRTTYModSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGRTTYModSettings::getBaud() {
    return baud;
}
void
SWGRTTYModSettings::setBaud(float baud) {
    this->baud = baud;
    this->m_baud_isSet = true;
}

qint32
SWGRTTYModSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGRTTYModSettings::setRfBandwidth(qint32 rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

qint32
SWGRTTYModSettings::getFrequencyShift() {
    return frequency_shift;
}
void
SWGRTTYModSettings::setFrequencyShift(qint32 frequency_shift) {
    this->frequency_shift = frequency_shift;
    this->m_frequency_shift_isSet = true;
}

float
SWGRTTYModSettings::getGain() {
    return gain;
}
void
SWGRTTYModSettings::setGain(float gain) {
    this->gain = gain;
    this->m_gain_isSet = true;
}

qint32
SWGRTTYModSettings::getChannelMute() {
    return channel_mute;
}
void
SWGRTTYModSettings::setChannelMute(qint32 channel_mute) {
    this->channel_mute = channel_mute;
    this->m_channel_mute_isSet = true;
}

qint32
SWGRTTYModSettings::getRepeat() {
    return repeat;
}
void
SWGRTTYModSettings::setRepeat(qint32 repeat) {
    this->repeat = repeat;
    this->m_repeat_isSet = true;
}

qint32
SWGRTTYModSettings::getRepeatCount() {
    return repeat_count;
}
void
SWGRTTYModSettings::setRepeatCount(qint32 repeat_count) {
    this->repeat_count = repeat_count;
    this->m_repeat_count_isSet = true;
}

qint32
SWGRTTYModSettings::getLpfTaps() {
    return lpf_taps;
}
void
SWGRTTYModSettings::setLpfTaps(qint32 lpf_taps) {
    this->lpf_taps = lpf_taps;
    this->m_lpf_taps_isSet = true;
}

qint32
SWGRTTYModSettings::getBbNoise() {
    return bb_noise;
}
void
SWGRTTYModSettings::setBbNoise(qint32 bb_noise) {
    this->bb_noise = bb_noise;
    this->m_bb_noise_isSet = true;
}

qint32
SWGRTTYModSettings::getRfNoise() {
    return rf_noise;
}
void
SWGRTTYModSettings::setRfNoise(qint32 rf_noise) {
    this->rf_noise = rf_noise;
    this->m_rf_noise_isSet = true;
}

QString*
SWGRTTYModSettings::getText() {
    return text;
}
void
SWGRTTYModSettings::setText(QString* text) {
    this->text = text;
    this->m_text_isSet = true;
}

qint32
SWGRTTYModSettings::getPulseShaping() {
    return pulse_shaping;
}
void
SWGRTTYModSettings::setPulseShaping(qint32 pulse_shaping) {
    this->pulse_shaping = pulse_shaping;
    this->m_pulse_shaping_isSet = true;
}

float
SWGRTTYModSettings::getBeta() {
    return beta;
}
void
SWGRTTYModSettings::setBeta(float beta) {
    this->beta = beta;
    this->m_beta_isSet = true;
}

qint32
SWGRTTYModSettings::getSymbolSpan() {
    return symbol_span;
}
void
SWGRTTYModSettings::setSymbolSpan(qint32 symbol_span) {
    this->symbol_span = symbol_span;
    this->m_symbol_span_isSet = true;
}

qint32
SWGRTTYModSettings::getCharacterSet() {
    return character_set;
}
void
SWGRTTYModSettings::setCharacterSet(qint32 character_set) {
    this->character_set = character_set;
    this->m_character_set_isSet = true;
}

qint32
SWGRTTYModSettings::getUnshiftOnSpace() {
    return unshift_on_space;
}
void
SWGRTTYModSettings::setUnshiftOnSpace(qint32 unshift_on_space) {
    this->unshift_on_space = unshift_on_space;
    this->m_unshift_on_space_isSet = true;
}

qint32
SWGRTTYModSettings::getMsbFirst() {
    return msb_first;
}
void
SWGRTTYModSettings::setMsbFirst(qint32 msb_first) {
    this->msb_first = msb_first;
    this->m_msb_first_isSet = true;
}

qint32
SWGRTTYModSettings::getSpaceHigh() {
    return space_high;
}
void
SWGRTTYModSettings::setSpaceHigh(qint32 space_high) {
    this->space_high = space_high;
    this->m_space_high_isSet = true;
}

QString*
SWGRTTYModSettings::getPrefixCrlf() {
    return prefix_crlf;
}
void
SWGRTTYModSettings::setPrefixCrlf(QString* prefix_crlf) {
    this->prefix_crlf = prefix_crlf;
    this->m_prefix_crlf_isSet = true;
}

QString*
SWGRTTYModSettings::getPostfixCrlf() {
    return postfix_crlf;
}
void
SWGRTTYModSettings::setPostfixCrlf(QString* postfix_crlf) {
    this->postfix_crlf = postfix_crlf;
    this->m_postfix_crlf_isSet = true;
}

qint32
SWGRTTYModSettings::getUdpEnabled() {
    return udp_enabled;
}
void
SWGRTTYModSettings::setUdpEnabled(qint32 udp_enabled) {
    this->udp_enabled = udp_enabled;
    this->m_udp_enabled_isSet = true;
}

QString*
SWGRTTYModSettings::getUdpAddress() {
    return udp_address;
}
void
SWGRTTYModSettings::setUdpAddress(QString* udp_address) {
    this->udp_address = udp_address;
    this->m_udp_address_isSet = true;
}

qint32
SWGRTTYModSettings::getUdpPort() {
    return udp_port;
}
void
SWGRTTYModSettings::setUdpPort(qint32 udp_port) {
    this->udp_port = udp_port;
    this->m_udp_port_isSet = true;
}

qint32
SWGRTTYModSettings::getRgbColor() {
    return rgb_color;
}
void
SWGRTTYModSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGRTTYModSettings::getTitle() {
    return title;
}
void
SWGRTTYModSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGRTTYModSettings::getStreamIndex() {
    return stream_index;
}
void
SWGRTTYModSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGRTTYModSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGRTTYModSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGRTTYModSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGRTTYModSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGRTTYModSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGRTTYModSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGRTTYModSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGRTTYModSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGRTTYModSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGRTTYModSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}

SWGChannelMarker*
SWGRTTYModSettings::getChannelMarker() {
    return channel_marker;
}
void
SWGRTTYModSettings::setChannelMarker(SWGChannelMarker* channel_marker) {
    this->channel_marker = channel_marker;
    this->m_channel_marker_isSet = true;
}

SWGRollupState*
SWGRTTYModSettings::getRollupState() {
    return rollup_state;
}
void
SWGRTTYModSettings::setRollupState(SWGRollupState* rollup_state) {
    this->rollup_state = rollup_state;
    this->m_rollup_state_isSet = true;
}


bool
SWGRTTYModSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_baud_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_frequency_shift_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain_isSet){
            isObjectUpdated = true; break;
        }
        if(m_channel_mute_isSet){
            isObjectUpdated = true; break;
        }
        if(m_repeat_isSet){
            isObjectUpdated = true; break;
        }
        if(m_repeat_count_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lpf_taps_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bb_noise_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_noise_isSet){
            isObjectUpdated = true; break;
        }
        if(text && *text != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_pulse_shaping_isSet){
            isObjectUpdated = true; break;
        }
        if(m_beta_isSet){
            isObjectUpdated = true; break;
        }
        if(m_symbol_span_isSet){
            isObjectUpdated = true; break;
        }
        if(m_character_set_isSet){
            isObjectUpdated = true; break;
        }
        if(m_unshift_on_space_isSet){
            isObjectUpdated = true; break;
        }
        if(m_msb_first_isSet){
            isObjectUpdated = true; break;
        }
        if(m_space_high_isSet){
            isObjectUpdated = true; break;
        }
        if(prefix_crlf && *prefix_crlf != QString("")){
            isObjectUpdated = true; break;
        }
        if(postfix_crlf && *postfix_crlf != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_udp_enabled_isSet){
            isObjectUpdated = true; break;
        }
        if(udp_address && *udp_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_udp_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_stream_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_channel_index_isSet){
            isObjectUpdated = true; break;
        }
        if(channel_marker && channel_marker->isSet()){
            isObjectUpdated = true; break;
        }
        if(rollup_state && rollup_state->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

