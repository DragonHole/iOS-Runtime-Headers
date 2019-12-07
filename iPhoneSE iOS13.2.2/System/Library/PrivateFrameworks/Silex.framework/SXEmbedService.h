/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXEmbedService.h>

@protocol SXEmbedService <NSObject>
@required
-(id)embedConfigurationForType:(id)arg1;
-(void)fetchHTMLFromOEmbedURL:(id)arg1 embedType:(id)arg2 completionBlock:(/*^block*/id)arg3;

@end


@protocol SXEmbedDataProvider;
@class NSURLSession, NSString;

@interface SXEmbedService : NSObject <SXEmbedService> {

	id<SXEmbedDataProvider> _embedDataProvider;
	NSURLSession* _session;

}

@property (nonatomic,readonly) id<SXEmbedDataProvider> embedDataProvider;              //@synthesize embedDataProvider=_embedDataProvider - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                                 //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSURLSession *)session;
-(id)initWithDataProvider:(id)arg1 ;
-(id)embedConfigurationForType:(id)arg1 ;
-(void)fetchHTMLFromOEmbedURL:(id)arg1 embedType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id<SXEmbedDataProvider>)embedDataProvider;
-(id)additionalQueryParametersForConfiguration:(id)arg1 ;
-(id)addAdditionalQueryParameters:(id)arg1 toURL:(id)arg2 ;
@end
