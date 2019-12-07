/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
#import <libobjc.A.dylib/WLMigrationDataSource.h>

@class WLSourceDevice, WLURLSessionController, NSString;

@interface WLRemoteDeviceDataSource : NSObject <WLMigrationDataSource> {

	WLSourceDevice* _device;
	WLURLSessionController* _urlSessionController;

}

@property (nonatomic,retain) WLSourceDevice * device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) WLURLSessionController * urlSessionController;              //@synthesize urlSessionController=_urlSessionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_requestSerialQueue;
-(WLSourceDevice *)device;
-(void)setDevice:(WLSourceDevice *)arg1 ;
-(id)_urlScheme;
-(WLURLSessionController *)urlSessionController;
-(void)setUrlSessionController:(WLURLSessionController *)arg1 ;
-(void)dataForSummary:(id)arg1 migrator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accountsDataForMigrator:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)summariesDataForAccount:(id)arg1 migrator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fileForSummary:(id)arg1 migrator:(id)arg2 fileAccessor:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dataSegmentForSummary:(id)arg1 byteRange:(NSRange)arg2 migrator:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateUIWithProgress:(double)arg1 logString:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_urlForAccountsWithMigrator:(id)arg1 ;
-(double)_urlRequestTimeout;
-(void)_performRequest:(id)arg1 numberOfRetriesAllowed:(unsigned long long)arg2 startDate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_urlForRecordSummariesForMigrator:(id)arg1 withAccountIdentifier:(id)arg2 ;
-(id)_urlForRecordForMigrator:(id)arg1 withSummaryIdentifier:(id)arg2 accountIdentifier:(id)arg3 segmentByteRange:(NSRange*)arg4 ;
-(void)_performDownloadRequest:(id)arg1 numberOfRetriesAllowed:(unsigned long long)arg2 startDate:(id)arg3 fileAccessor:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_shouldRetryWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(unsigned long long)_newNumberOfRetriesAllowed:(unsigned long long)arg1 startDate:(id)arg2 ;
-(id)initWithSourceDevice:(id)arg1 urlSessionController:(id)arg2 ;
-(id)_relativePathForRecordForMigrator:(id)arg1 summaryIdentifier:(id)arg2 accountIdentifier:(id)arg3 ;
@end
