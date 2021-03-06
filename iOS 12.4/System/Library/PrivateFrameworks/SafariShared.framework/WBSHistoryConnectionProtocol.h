/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSHistoryConnectionProtocol
@required
-(void)queryMemoryFootprint:(/*^block*/id)arg1;
-(void)beginHistoryAccessSession:(/*^block*/id)arg1;
-(void)ensureConnected:(/*^block*/id)arg1;
-(void)getServiceInfo:(/*^block*/id)arg1;
-(void)beginURLCompletionSession:(/*^block*/id)arg1;
-(void)getVisitedLinksWithCompletionHandler:(/*^block*/id)arg1;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)debugGetDatabaseURLWithCompletionHandler:(/*^block*/id)arg1;

@end

