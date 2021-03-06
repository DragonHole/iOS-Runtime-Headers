/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPVoiceControlTemplateDelegate.h>

@class NSArray, NSString;

@interface CPVoiceControlTemplate : CPTemplate <CPVoiceControlTemplateDelegate> {

	NSArray* _voiceControlStates;
	NSString* _activeStateIdentifier;

}

@property (nonatomic,retain) id<CPVoiceTemplateProviding> templateProvider; 
@property (nonatomic,copy,readonly) NSArray * voiceControlStates;                        //@synthesize voiceControlStates=_voiceControlStates - In the implementation block
@property (nonatomic,copy,readonly) NSString * activeStateIdentifier;                    //@synthesize activeStateIdentifier=_activeStateIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)leadingNavigationBarButtons;
-(id)trailingNavigationBarButtons;
-(id)initWithVoiceControlStates:(id)arg1 ;
-(void)activateVoiceControlStateWithIdentifier:(id)arg1 ;
-(NSString *)activeStateIdentifier;
-(NSArray *)voiceControlStates;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

