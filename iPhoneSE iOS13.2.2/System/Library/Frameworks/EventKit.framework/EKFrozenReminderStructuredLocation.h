/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKFrozenReminderObject.h>

@class NSString;

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString * uniqueIdentifier; 
+(BOOL)canCommitSelf;
+(id)uniqueIdentifierForREMObject:(id)arg1 ;
+(Class)meltedClass;
-(id)uuid;
-(id)title;
-(NSString *)uniqueIdentifier;
-(double)radius;
-(double)latitude;
-(double)longitude;
-(int)referenceFrame;
-(id)mapKitHandle;
-(id)_structuredLocation;
-(id)remObjectID;
-(id)updateParentToCommitSelf:(id)arg1 ;
-(id)initWithAlternateUniverseObject:(EKPersistentObject*)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3 ;
-(id)updatedStructuredLocation;
-(void)setLatitudeAndLongitudeFromAlternateUniverseObject:(EKPersistentObject*)arg1 inChangeSet:(id)arg2 ;
@end
