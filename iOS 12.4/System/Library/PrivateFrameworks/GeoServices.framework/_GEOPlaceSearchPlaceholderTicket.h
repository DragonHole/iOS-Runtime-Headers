/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOAbstractRequestResponseTicket.h>
#import <libobjc.A.dylib/GEOMapServiceSearchFieldPlaceholderTicket.h>

@class GEOMapServiceTraits, NSDictionary, NSString;

@interface _GEOPlaceSearchPlaceholderTicket : GEOAbstractRequestResponseTicket <GEOMapServiceSearchFieldPlaceholderTicket>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
@end
