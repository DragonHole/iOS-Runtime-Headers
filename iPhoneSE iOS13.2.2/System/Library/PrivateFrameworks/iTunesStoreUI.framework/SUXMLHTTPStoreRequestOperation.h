/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SSAuthenticationContext, ISDataProvider;

@interface SUXMLHTTPStoreRequestOperation : ISOperation {

	/*^block*/id _outputBlock;
	SSURLRequestProperties* _requestProperties;
	SSAuthenticationContext* _authenticationContext;
	ISDataProvider* _dataProvider;

}

@property (nonatomic,retain) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) ISDataProvider * dataProvider;                                //@synthesize dataProvider=_dataProvider - In the implementation block
@property (copy) id outputBlock; 
-(void)run;
-(void)setDataProvider:(ISDataProvider *)arg1 ;
-(ISDataProvider *)dataProvider;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithRequestProperties:(id)arg1 ;
@end

