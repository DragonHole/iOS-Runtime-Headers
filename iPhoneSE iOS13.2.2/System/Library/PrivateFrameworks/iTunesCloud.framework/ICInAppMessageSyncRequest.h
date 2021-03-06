/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICIAMSynchronizeMessagesResponse;

@interface ICInAppMessageSyncRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	ICIAMSynchronizeMessagesResponse* _syncResponse;
	unsigned long long _fromRevision;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 fromRevision:(unsigned long long)arg2 ;
@end

