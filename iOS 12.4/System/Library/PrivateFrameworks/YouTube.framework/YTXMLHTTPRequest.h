/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/XMLSAXHTTPRequest.h>

@class NSMutableURLRequest;

@interface YTXMLHTTPRequest : XMLSAXHTTPRequest {

	NSMutableURLRequest* _deferredRequest;
	BOOL _needsAccountAuth;
	BOOL _needsHostHeader;

}

@property (assign,nonatomic) BOOL needsAccountAuth;              //@synthesize needsAccountAuth=_needsAccountAuth - In the implementation block
@property (assign,nonatomic) BOOL needsHostHeader;               //@synthesize needsHostHeader=_needsHostHeader - In the implementation block
-(void)didAuthenticate:(id)arg1 ;
-(void)setNeedsHostHeader:(BOOL)arg1 ;
-(void)failedToAuthenticate:(id)arg1 ;
-(BOOL)needsAccountAuth;
-(BOOL)needsHostHeader;
-(void)setNeedsAccountAuth:(BOOL)arg1 ;
-(void)listenForAuthenticationNotifications:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)loadRequest:(id)arg1 ;
@end

