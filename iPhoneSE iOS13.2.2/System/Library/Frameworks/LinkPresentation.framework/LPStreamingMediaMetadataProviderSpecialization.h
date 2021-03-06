/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class LPMediaAssetFetcher, AVAssetImageGenerator, LPLinkMetadata;

@interface LPStreamingMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	BOOL _cancelled;
	LPMediaAssetFetcher* _fetcher;
	AVAssetImageGenerator* _videoImageGenerator;
	LPLinkMetadata* _metadata;

}
+(unsigned long long)specialization;
+(id)specializedMetadataProviderForResourceWithContext:(id)arg1 ;
-(void)cancel;
-(void)start;
-(void)done;
-(void)fail;
@end

