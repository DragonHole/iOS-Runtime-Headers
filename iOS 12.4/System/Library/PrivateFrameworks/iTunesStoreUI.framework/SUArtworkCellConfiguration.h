/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUArrayCellConfiguration.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSString, NSNumber;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate> {

	NSMutableDictionary* _artworkByURL;
	NSMutableArray* _artworkLoadOperations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
+(id)copyDefaultContext;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)cancelArtworkRequests;
-(id)copyImageDataProvider;
-(id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2 ;
-(void)reloadAfterArtworkLoad;
-(id)artworkImageForItemImage:(id)arg1 ;
-(id)artworkImageForURL:(id)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)dealloc;
-(void)setRepresentedObject:(id)arg1 ;
@end
