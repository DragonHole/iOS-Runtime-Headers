/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSUUID, NSData, NSSet;

@interface VCVoiceShortcutManagedObject : NSManagedObject

@property (nonatomic,copy) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,copy) NSDate * dateLastModified; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (assign,nonatomic) BOOL isMarkedAsDeleted; 
@property (nonatomic,retain) NSData * keyImageData; 
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,retain) NSData * serializedWorkflowData; 
@property (nonatomic,copy) NSString * shortcutDescription; 
@property (nonatomic,copy) NSString * shortcutName; 
@property (nonatomic,retain) NSSet * syncStates; 
+(id)fetchRequest;
+(id)nonUserDataAttributes;
-(BOOL)populateWithVoiceShortcut:(id)arg1 error:(id*)arg2 ;
-(id)initWithContext:(id)arg1 voiceShortcut:(id)arg2 error:(id*)arg3 ;
@end

