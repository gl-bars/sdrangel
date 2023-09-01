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

/*
 * SWGRTTYModSettings.h
 *
 * RTTYMod
 */

#ifndef SWGRTTYModSettings_H_
#define SWGRTTYModSettings_H_

#include <QJsonObject>


#include "SWGChannelMarker.h"
#include "SWGRollupState.h"
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGRTTYModSettings: public SWGObject {
public:
    SWGRTTYModSettings();
    SWGRTTYModSettings(QString* json);
    virtual ~SWGRTTYModSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGRTTYModSettings* fromJson(QString &jsonString) override;

    qint64 getInputFrequencyOffset();
    void setInputFrequencyOffset(qint64 input_frequency_offset);

    float getBaud();
    void setBaud(float baud);

    qint32 getRfBandwidth();
    void setRfBandwidth(qint32 rf_bandwidth);

    qint32 getFrequencyShift();
    void setFrequencyShift(qint32 frequency_shift);

    float getGain();
    void setGain(float gain);

    qint32 getChannelMute();
    void setChannelMute(qint32 channel_mute);

    qint32 getRepeat();
    void setRepeat(qint32 repeat);

    qint32 getRepeatCount();
    void setRepeatCount(qint32 repeat_count);

    qint32 getLpfTaps();
    void setLpfTaps(qint32 lpf_taps);

    qint32 getBbNoise();
    void setBbNoise(qint32 bb_noise);

    qint32 getRfNoise();
    void setRfNoise(qint32 rf_noise);

    QString* getText();
    void setText(QString* text);

    qint32 getPulseShaping();
    void setPulseShaping(qint32 pulse_shaping);

    float getBeta();
    void setBeta(float beta);

    qint32 getSymbolSpan();
    void setSymbolSpan(qint32 symbol_span);

    qint32 getCharacterSet();
    void setCharacterSet(qint32 character_set);

    qint32 getUnshiftOnSpace();
    void setUnshiftOnSpace(qint32 unshift_on_space);

    qint32 getMsbFirst();
    void setMsbFirst(qint32 msb_first);

    qint32 getSpaceHigh();
    void setSpaceHigh(qint32 space_high);

    QString* getPrefixCrlf();
    void setPrefixCrlf(QString* prefix_crlf);

    QString* getPostfixCrlf();
    void setPostfixCrlf(QString* postfix_crlf);

    qint32 getUdpEnabled();
    void setUdpEnabled(qint32 udp_enabled);

    QString* getUdpAddress();
    void setUdpAddress(QString* udp_address);

    qint32 getUdpPort();
    void setUdpPort(qint32 udp_port);

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    QString* getTitle();
    void setTitle(QString* title);

    qint32 getStreamIndex();
    void setStreamIndex(qint32 stream_index);

    qint32 getUseReverseApi();
    void setUseReverseApi(qint32 use_reverse_api);

    QString* getReverseApiAddress();
    void setReverseApiAddress(QString* reverse_api_address);

    qint32 getReverseApiPort();
    void setReverseApiPort(qint32 reverse_api_port);

    qint32 getReverseApiDeviceIndex();
    void setReverseApiDeviceIndex(qint32 reverse_api_device_index);

    qint32 getReverseApiChannelIndex();
    void setReverseApiChannelIndex(qint32 reverse_api_channel_index);

    SWGChannelMarker* getChannelMarker();
    void setChannelMarker(SWGChannelMarker* channel_marker);

    SWGRollupState* getRollupState();
    void setRollupState(SWGRollupState* rollup_state);


    virtual bool isSet() override;

private:
    qint64 input_frequency_offset;
    bool m_input_frequency_offset_isSet;

    float baud;
    bool m_baud_isSet;

    qint32 rf_bandwidth;
    bool m_rf_bandwidth_isSet;

    qint32 frequency_shift;
    bool m_frequency_shift_isSet;

    float gain;
    bool m_gain_isSet;

    qint32 channel_mute;
    bool m_channel_mute_isSet;

    qint32 repeat;
    bool m_repeat_isSet;

    qint32 repeat_count;
    bool m_repeat_count_isSet;

    qint32 lpf_taps;
    bool m_lpf_taps_isSet;

    qint32 bb_noise;
    bool m_bb_noise_isSet;

    qint32 rf_noise;
    bool m_rf_noise_isSet;

    QString* text;
    bool m_text_isSet;

    qint32 pulse_shaping;
    bool m_pulse_shaping_isSet;

    float beta;
    bool m_beta_isSet;

    qint32 symbol_span;
    bool m_symbol_span_isSet;

    qint32 character_set;
    bool m_character_set_isSet;

    qint32 unshift_on_space;
    bool m_unshift_on_space_isSet;

    qint32 msb_first;
    bool m_msb_first_isSet;

    qint32 space_high;
    bool m_space_high_isSet;

    QString* prefix_crlf;
    bool m_prefix_crlf_isSet;

    QString* postfix_crlf;
    bool m_postfix_crlf_isSet;

    qint32 udp_enabled;
    bool m_udp_enabled_isSet;

    QString* udp_address;
    bool m_udp_address_isSet;

    qint32 udp_port;
    bool m_udp_port_isSet;

    qint32 rgb_color;
    bool m_rgb_color_isSet;

    QString* title;
    bool m_title_isSet;

    qint32 stream_index;
    bool m_stream_index_isSet;

    qint32 use_reverse_api;
    bool m_use_reverse_api_isSet;

    QString* reverse_api_address;
    bool m_reverse_api_address_isSet;

    qint32 reverse_api_port;
    bool m_reverse_api_port_isSet;

    qint32 reverse_api_device_index;
    bool m_reverse_api_device_index_isSet;

    qint32 reverse_api_channel_index;
    bool m_reverse_api_channel_index_isSet;

    SWGChannelMarker* channel_marker;
    bool m_channel_marker_isSet;

    SWGRollupState* rollup_state;
    bool m_rollup_state_isSet;

};

}

#endif /* SWGRTTYModSettings_H_ */
