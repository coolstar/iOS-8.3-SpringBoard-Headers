/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBControlCenterShortcutSectionSettings, SBControlCenterSettingsSectionSettings, UIColor;

__attribute__((visibility("hidden")))
@interface SBControlCenterSettings : XXUnknownSuperclass {
	BOOL _highlightUsesPlusL;
	BOOL _forceVibrantControls;
	BOOL _useNewBounce;
	SBControlCenterSettingsSectionSettings* _settingsSectionSettings;
	SBControlCenterShortcutSectionSettings* _shortcutSectionSettings;
	float _controlAlpha;
	float _controlAlpha1x;
	float _minControlAlpha;
	float _maxControlAlpha;
	float _disabledAlpha;
	float _disabledAlpha1x;
	float _highlightAlpha;
	float _glowAlpha;
	UIColor* _highlightColor;
	float _oldBounceFriction;
	float _bounceDensityFactor;
	float _bounceResistance;
	float _minVelocity;
	float _maxVelocity;
	float _attachmentThreshold;
	float _attachmentFrequencyAbove;
	float _attachmentFrequencyBelow;
	float _attachmentVelocityDamping;
	float _attachmentMinDamping;
	float _attachmentMaxDamping;
	float _backgroundAlphaFactor;
}
@property(assign) float backgroundAlphaFactor;
@property(assign) float attachmentMaxDamping;
@property(assign) float attachmentMinDamping;
@property(assign) float attachmentVelocityDamping;
@property(assign) float attachmentFrequencyBelow;
@property(assign) float attachmentFrequencyAbove;
@property(assign) float attachmentThreshold;
@property(assign) float maxVelocity;
@property(assign) float minVelocity;
@property(assign) float bounceResistance;
@property(assign) float bounceDensityFactor;
@property(assign) float oldBounceFriction;
@property(assign) BOOL useNewBounce;
@property(retain) UIColor* highlightColor;
@property(assign) float glowAlpha;
@property(assign) BOOL forceVibrantControls;
@property(assign) BOOL highlightUsesPlusL;
@property(assign) float highlightAlpha;
@property(assign) float disabledAlpha1x;
@property(assign) float disabledAlpha;
@property(assign) float maxControlAlpha;
@property(assign) float minControlAlpha;
@property(assign) float controlAlpha1x;
@property(assign) float controlAlpha;
@property(retain) SBControlCenterShortcutSectionSettings* shortcutSectionSettings;
@property(retain) SBControlCenterSettingsSectionSettings* settingsSectionSettings;
+(id)settingsControllerModule;
-(float)resolvedDisabledAlpha;
-(float)resolvedControlAlpha;
-(void)setDefaultValues;
@end

