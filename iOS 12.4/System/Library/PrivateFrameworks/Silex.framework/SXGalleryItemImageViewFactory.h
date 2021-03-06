/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXGalleryItemImageViewFactory.h>

@protocol SXGalleryItemImageViewFactory <NSObject>
@required
-(id)imageViewForGalleryItem:(id)arg1 imageResource:(id)arg2;

@end


@protocol SXResourceDataSourceProvider, SXReachabilityProvider;
@class NSString;

@interface SXGalleryItemImageViewFactory : NSObject <SXGalleryItemImageViewFactory> {

	id<SXResourceDataSourceProvider> _resourceDataSourceProvider;
	id<SXReachabilityProvider> _reachabilityProvider;

}

@property (nonatomic,readonly) id<SXResourceDataSourceProvider> resourceDataSourceProvider;              //@synthesize resourceDataSourceProvider=_resourceDataSourceProvider - In the implementation block
@property (nonatomic,readonly) id<SXReachabilityProvider> reachabilityProvider;                          //@synthesize reachabilityProvider=_reachabilityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithResourceDataSourceProvider:(id)arg1 reachabilityProvider:(id)arg2 ;
-(id<SXReachabilityProvider>)reachabilityProvider;
-(id<SXResourceDataSourceProvider>)resourceDataSourceProvider;
-(id)imageViewForGalleryItem:(id)arg1 imageResource:(id)arg2 ;
@end

