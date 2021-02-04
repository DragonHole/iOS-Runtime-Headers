/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKVideoPlayerDataSource.h>

@class NSArray;

@interface NTKVideoPlayerArrayDataSource : NTKVideoPlayerDataSource {

	long long _currentListingIndex;
	NSArray* _listings;
	unsigned long long _order;

}

@property (assign,nonatomic) unsigned long long order;              //@synthesize order=_order - In the implementation block
+(id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 andListings:(id)arg3 ;
+(id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(unsigned long long)arg3 andListings:(id)arg4 ;
+(id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(unsigned long long)arg3 endBehavior:(unsigned long long)arg4 andFilenames:(id)arg5 ;
+(id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 andFilenames:(id)arg3 ;
+(id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(unsigned long long)arg3 andFilenames:(id)arg4 ;
+(id)dataSourceForDevice:(id)arg1 withFilenames:(id)arg2 ;
-(id)currentListing;
-(void)advanceToNextListing:(unsigned long long)arg1 ;
-(id)initForDevice:(id)arg1 withListings:(id)arg2 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(unsigned long long)order;
@end
