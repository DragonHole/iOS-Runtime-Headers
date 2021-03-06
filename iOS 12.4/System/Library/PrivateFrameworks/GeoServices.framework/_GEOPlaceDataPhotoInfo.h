/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapItemPhotoInfo.h>

@class NSURL, NSString;

@interface _GEOPlaceDataPhotoInfo : NSObject <GEOMapItemPhotoInfo> {

	CGSize _size;
	NSURL* _url;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) NSURL * url; 
+(id)sortedPhotoInfoFromPhotoVersions:(id)arg1 ;
-(id)initWithPhotoContent:(id)arg1 ;
-(CGSize)size;
-(NSURL *)url;
@end

