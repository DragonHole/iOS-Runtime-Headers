/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitAttribution.h>

@class NSArray, GEOPDTransitAttribution, NSString;

@interface _GEOMapItemTransitAttribution : NSObject <GEOTransitAttribution> {

	GEOPDTransitAttribution* _transitAttribution;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_providerNames,nonatomic,readonly) NSArray * providerNames; 
-(id)initWithTransitAttribution:(id)arg1 ;
-(id)_providerNames;
@end

