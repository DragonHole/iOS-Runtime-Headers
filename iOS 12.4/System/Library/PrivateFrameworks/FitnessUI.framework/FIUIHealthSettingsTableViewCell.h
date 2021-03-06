/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol FIUIHealthSettingsForceUpdatable;
@class UIView;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell {

	UIView* _inputView;
	id<FIUIHealthSettingsForceUpdatable> _forceUpdatable;

}

@property (assign,nonatomic,__weak) id<FIUIHealthSettingsForceUpdatable> forceUpdatable;              //@synthesize forceUpdatable=_forceUpdatable - In the implementation block
-(void)setForceUpdatable:(id<FIUIHealthSettingsForceUpdatable>)arg1 ;
-(id<FIUIHealthSettingsForceUpdatable>)forceUpdatable;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)inputView;
-(void)setInputView:(id)arg1 ;
@end

