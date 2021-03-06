/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSArray, BWColorLookupCache, FigColorCubeMetalFilter;

@interface BWMultiFilterThumbnailNode : BWNode {

	CGSize _thumbnailSize;
	NSArray* _filters;
	BWColorLookupCache* _colorLookupCache;
	FigColorCubeMetalFilter* _filter;
	opaqueCMFormatDescriptionRef _mostRecentFormatDescription;

}
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(int)_loadAndConfigureFilterBundle;
-(id)initWithFilters:(id)arg1 thumbnailSize:(CGSize)arg2 ;
-(id)videoOutput;
-(void)dealloc;
-(id)nodeType;
@end

