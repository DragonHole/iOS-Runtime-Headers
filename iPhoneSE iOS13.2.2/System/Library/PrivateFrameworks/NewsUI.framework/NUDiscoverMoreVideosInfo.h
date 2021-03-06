/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SVDiscoverMoreConfigurationProviding.h>

@class NSString, NTPBDiscoverMoreVideosInfo;

@interface NUDiscoverMoreVideosInfo : NSObject <NSCopying, SVDiscoverMoreConfigurationProviding> {

	NTPBDiscoverMoreVideosInfo* _discoverMoreVideosInfo;

}

@property (nonatomic,copy,readonly) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo;              //@synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionURLString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)actionURLString;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(id)initWithDiscoverMoreVideosInfo:(id)arg1 ;
@end

