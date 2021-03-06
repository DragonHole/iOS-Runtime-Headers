/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, ICMediaRedownloadResponse, ICMusicRestoreRequestParameters;

@interface ICMusicRestoreRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	ICStoreURLRequest* _storeURLRequest;
	ICMediaRedownloadResponse* _response;
	ICMusicRestoreRequestParameters* _requestParameters;

}
-(void)cancel;
-(void)execute;
-(id)_serializedBodyDataWithAccountID:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 parameters:(id)arg2 ;
-(void)performRestoreRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

