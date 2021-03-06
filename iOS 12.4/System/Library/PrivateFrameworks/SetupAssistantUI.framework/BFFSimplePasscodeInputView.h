/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <SetupAssistantUI/BFFPasscodeInputView.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>

@class PSPasscodeField, NSString;

@interface BFFSimplePasscodeInputView : BFFPasscodeInputView <PSPasscodeFieldDelegate> {

	BOOL _limitCharactersToNumbers;
	PSPasscodeField* _passcodeField;

}

@property (nonatomic,retain) PSPasscodeField * passcodeField;              //@synthesize passcodeField=_passcodeField - In the implementation block
@property (assign,nonatomic) BOOL limitCharactersToNumbers;                //@synthesize limitCharactersToNumbers=_limitCharactersToNumbers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)passcode;
-(void)setPasscode:(id)arg1 ;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(id)passcodeDisplayView;
-(void)setLimitCharactersToNumbers:(BOOL)arg1 ;
-(BOOL)limitCharactersToNumbers;
-(id)initWithFrame:(CGRect)arg1 numberOfEntryFields:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(void)setPasscodeField:(PSPasscodeField *)arg1 ;
-(PSPasscodeField *)passcodeField;
-(id)passcodeField:(id)arg1 shouldInsertText:(id)arg2 ;
@end

