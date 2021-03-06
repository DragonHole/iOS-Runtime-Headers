/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, INShortcut, INVoiceShortcutAction, INIntent, NSUserActivity;

@interface INVoiceShortcut : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	NSString* _invocationPhrase;
	INShortcut* _shortcut;

}

@property (nonatomic,copy,readonly) INVoiceShortcutAction * action; 
@property (nonatomic,readonly) INIntent * intent; 
@property (nonatomic,readonly) NSUserActivity * userActivity; 
@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * invocationPhrase;                 //@synthesize invocationPhrase=_invocationPhrase - In the implementation block
@property (nonatomic,copy,readonly) INShortcut * shortcut;                       //@synthesize shortcut=_shortcut - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithUserActivity:(id)arg1 ;
-(id)_initWithVCVoiceShortcut:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 invocationPhrase:(id)arg2 shortcut:(id)arg3 ;
-(NSString *)invocationPhrase;
-(INShortcut *)shortcut;
-(id)initWithIntent:(id)arg1 ;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(INVoiceShortcutAction *)action;
-(INIntent *)intent;
-(NSUserActivity *)userActivity;
@end

