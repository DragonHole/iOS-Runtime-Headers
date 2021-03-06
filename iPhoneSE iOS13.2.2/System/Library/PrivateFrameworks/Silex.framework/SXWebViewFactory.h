/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebViewFactory.h>

@protocol SXWebViewFactory <NSObject>
@required
-(id)createWebViewWithUserContentController:(id)arg1;

@end


@class NSPointerArray, WKProcessPool, WKWebsiteDataStore, NSString;

@interface SXWebViewFactory : NSObject <SXWebViewFactory> {

	NSPointerArray* _webViews;
	WKProcessPool* _processPool;
	WKWebsiteDataStore* _dataStore;

}

@property (nonatomic,readonly) WKProcessPool * processPool;                 //@synthesize processPool=_processPool - In the implementation block
@property (nonatomic,readonly) WKWebsiteDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) NSPointerArray * webViews;                     //@synthesize webViews=_webViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebsiteDataStore *)dataStore;
-(WKProcessPool *)processPool;
-(id)createWebViewWithUserContentController:(id)arg1 ;
-(id)initWithProcessPool:(id)arg1 websiteDataStore:(id)arg2 ;
-(void)assignRelatedWebViewToConfiguration:(id)arg1 ;
-(NSPointerArray *)webViews;
-(void)setWebViews:(NSPointerArray *)arg1 ;
@end

