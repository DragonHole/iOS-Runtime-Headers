/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPCloudAccess.h>

@class NSUUID, NSMutableDictionary, NSError, NSString;

@interface _MSPMockCloudAccess : NSObject <MSPCloudAccess> {

	NSUUID* _identifier;
	NSMutableDictionary* _records;
	NSMutableDictionary* _deletedRecordNamesByRecordTypeSinceLastCachingCall;
	NSError* _retryableError;
	/*^block*/id _availabilityDidChangeHandler;
	/*^block*/id _contentsDidChangeHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id availabilityDidChangeHandler;              //@synthesize availabilityDidChangeHandler=_availabilityDidChangeHandler - In the implementation block
@property (nonatomic,copy) id contentsDidChangeHandler;                  //@synthesize contentsDidChangeHandler=_contentsDidChangeHandler - In the implementation block
+(id)_clientRegistrationRecordsDictionary;
+(void)_beginTrackingAccess:(id)arg1 ;
+(id)allAccesses;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(void)setClientRegistrationIdentifier:(id)arg1 ;
-(id)minimumStartDate;
-(id)newRecordOfType:(id)arg1 name:(id)arg2 ;
-(id)newReferenceToRecordWithName:(id)arg1 ;
-(id)newReferenceToRecord:(id)arg1 ;
-(id)newRequestGroupWithName:(id)arg1 size:(long long)arg2 ;
-(id)newFetchRequestWithGroup:(id)arg1 forRecordsWithNames:(id)arg2 successHandler:(/*^block*/id)arg3 ;
-(id)newModifyRequestWithGroup:(id)arg1 forRecordsToModify:(id)arg2 namesOfRecordsToDelete:(id)arg3 ;
-(id)newQueryRequestWithGroup:(id)arg1 forRecordsOfType:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 successHandler:(/*^block*/id)arg5 ;
-(id)newCombinedCachingFetchRequestWithGroup:(id)arg1 forTask:(id)arg2 successHandler:(/*^block*/id)arg3 ;
-(id)newFetchRequestForCurrentClientRegistrationRecordWithGroup:(id)arg1 successHandler:(/*^block*/id)arg2 ;
-(id)newModifyClientRegistrationRecordRequestWithGroup:(id)arg1 editedRecord:(id)arg2 ;
-(id)newSubscriptionRegistrationRequestWithGroup:(id)arg1 successHandler:(/*^block*/id)arg2 ;
-(void)checkForAvailabilityWithCallbackQueue:(id)arg1 schedulePreAvailabilityOperationHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldRetryAfterError:(id)arg1 isCancelation:(BOOL*)arg2 afterDelay:(out id*)arg3 withResolvingTask:(out id*)arg4 ;
-(id)availabilityDidChangeHandler;
-(void)setAvailabilityDidChangeHandler:(id)arg1 ;
-(id)contentsDidChangeHandler;
-(void)setContentsDidChangeHandler:(id)arg1 ;
-(id)snapshotURL;
-(void)loadSnapshot;
-(void)setShouldAllowRetryForError:(id)arg1 ;
-(id)retryDelayForError:(id)arg1 ;
-(id)init;
-(id)snapshot;
@end

