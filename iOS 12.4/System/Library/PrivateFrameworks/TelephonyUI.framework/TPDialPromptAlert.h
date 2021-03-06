/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TPAlert.h>

@class NSString, NSSet;

@interface TPDialPromptAlert : TPAlert {

	/*^block*/id _dialAction;
	NSString* _buttonTitle;
	NSSet* _handles;

}

@property (nonatomic,copy) id dialAction;                                //@synthesize dialAction=_dialAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitle;              //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * handles;                     //@synthesize handles=_handles - In the implementation block
-(id)initWithButtonTitle:(id)arg1 handles:(id)arg2 dialAction:(/*^block*/id)arg3 ;
-(id)dialAction;
-(id)initWithJoinRequest:(id)arg1 dialAction:(/*^block*/id)arg2 ;
-(void)defaultResponse;
-(void)otherResponse;
-(void)setDialAction:(id)arg1 ;
-(id)initWithDialRequest:(id)arg1 dialAction:(/*^block*/id)arg2 ;
-(id)defaultButtonTitle;
-(id)otherButtonTitle;
-(id)title;
-(NSSet *)handles;
-(NSString *)buttonTitle;
@end

