/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, WFLWorkflow, INImage, NSData;

@interface VCVoiceShortcut : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _phrase;
	NSString* _associatedAppBundleIdentifier;
	NSDate* _dateCreated;
	NSDate* _dateLastModified;
	WFLWorkflow* _workflow;
	INImage* _keyImage;
	NSString* _shortcutName;
	NSString* _shortcutDescription;
	NSData* _serializedWorkflowData;
	NSData* _keyImageData;
	unsigned long long _cachedBlacklistStatus;

}

@property (nonatomic,retain) WFLWorkflow * workflow;                                //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) INImage * keyImage;                                    //@synthesize keyImage=_keyImage - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * phrase;                                       //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * shortcutName;                                 //@synthesize shortcutName=_shortcutName - In the implementation block
@property (nonatomic,copy) NSString * shortcutDescription;                          //@synthesize shortcutDescription=_shortcutDescription - In the implementation block
@property (nonatomic,copy) NSString * associatedAppBundleIdentifier;                //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * dateCreated;                                  //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,retain) NSDate * dateLastModified;                             //@synthesize dateLastModified=_dateLastModified - In the implementation block
@property (nonatomic,retain) NSData * serializedWorkflowData;                       //@synthesize serializedWorkflowData=_serializedWorkflowData - In the implementation block
@property (nonatomic,retain) NSData * keyImageData;                                 //@synthesize keyImageData=_keyImageData - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenModified; 
@property (assign,nonatomic) unsigned long long cachedBlacklistStatus;              //@synthesize cachedBlacklistStatus=_cachedBlacklistStatus - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(BOOL)isValidVoiceShortcut:(id)arg1 error:(id*)arg2 ;
-(void)setKeyImage:(INImage *)arg1 ;
-(INImage *)keyImage;
-(void)setWorkflow:(WFLWorkflow *)arg1 ;
-(WFLWorkflow *)workflow;
-(NSString *)associatedAppBundleIdentifier;
-(void)setPhrase:(NSString *)arg1 ;
-(NSString *)phrase;
-(void)setDateCreated:(NSDate *)arg1 ;
-(NSDate *)dateCreated;
-(BOOL)isValid:(id*)arg1 ;
-(BOOL)hasBeenModified;
-(void)setDateLastModified:(NSDate *)arg1 ;
-(NSDate *)dateLastModified;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)_handleIntentActionIfExists;
-(unsigned long long)cachedBlacklistStatus;
-(id)initWithPhrase:(id)arg1 workflow:(id)arg2 error:(id*)arg3 ;
-(void)setShortcutName:(NSString *)arg1 ;
-(void)setShortcutDescription:(NSString *)arg1 ;
-(void)setAssociatedAppBundleIdentifier:(NSString *)arg1 ;
-(NSData *)serializedWorkflowData;
-(void)setSerializedWorkflowData:(NSData *)arg1 ;
-(void)setKeyImageData:(NSData *)arg1 ;
-(id)initWithIdentifier:(id)arg1 phrase:(id)arg2 shortcutName:(id)arg3 shortcutDescription:(id)arg4 associatedAppBundleIdentifier:(id)arg5 dateCreated:(id)arg6 dateLastModified:(id)arg7 serializedWorkflowData:(id)arg8 keyImageData:(id)arg9 error:(id*)arg10 ;
-(void)setCachedBlacklistStatus:(unsigned long long)arg1 ;
-(NSData *)keyImageData;
-(NSString *)shortcutName;
-(NSString *)shortcutDescription;
@end

