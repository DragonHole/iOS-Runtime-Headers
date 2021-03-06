/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVVideoComposition, NSArray, AVMetadataItemFilter;

@interface AVAssetExportSessionInternal : NSObject {

	OpaqueFigAssetExportSessionRef figExportSession;
	AVAsset* asset;
	AVAudioMix* audioMix;
	void* figVideoCompositor;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	AVVideoComposition* videoComposition;
	NSArray* metadata;
	AVMetadataItemFilter* metadataItemFilter;
	/*^block*/id handler;

}
@end

