/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RMUniquelySerializableManagedObject.h>
#import <libobjc.A.dylib/RMSyncableSubObject.h>

@class NSString, NSData, RMBlueprint;

@interface RMBlueprintConfiguration : NSManagedObject <RMUniquelySerializableManagedObject, RMSyncableSubObject>

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) NSData * payloadPlist; 
@property (nonatomic,retain) RMBlueprint * blueprint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 ;
-(void)delete;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)syncableRootObject;
-(id)dictionaryRepresentation;
@end

