/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOStorefrontView, NSURL;

@interface GEOStorefrontPresentationInfo : NSObject {

	GEOStorefrontView* _closeUpView;
	GEOStorefrontView* _standOffView;
	NSURL* _overlayImageURL;

}

@property (nonatomic,readonly) GEOStorefrontView * closeUpView;               //@synthesize closeUpView=_closeUpView - In the implementation block
@property (nonatomic,readonly) GEOStorefrontView * standOffView;              //@synthesize standOffView=_standOffView - In the implementation block
@property (nonatomic,readonly) NSURL * overlayImageURL;                       //@synthesize overlayImageURL=_overlayImageURL - In the implementation block
-(id)init;
-(GEOStorefrontView *)closeUpView;
-(GEOStorefrontView *)standOffView;
-(id)initWithStorefrontPresentation:(id)arg1 ;
-(NSURL *)overlayImageURL;
@end

