/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVWeakReference, AVAssetWriterInputHelper, NSObject, AVKeyPathDependencyManager, AVAssetWriterInputPassDescriptionResponder;

@interface AVAssetWriterInputInternal : NSObject {

	AVWeakReference* weakReference;
	AVAssetWriterInputHelper* helper;
	NSObject*<OS_dispatch_queue> helperQueue;
	AVWeakReference* weakReferenceToAttachedAdaptor;
	AVWeakReference* weakReferenceToAssetWriter;
	AVKeyPathDependencyManager* keyPathDependencyManager;
	long long numberOfAppendFailures;
	NSObject*<OS_dispatch_queue> appendFailureReadWriteQueue;
	AVAssetWriterInputPassDescriptionResponder* passDescriptionResponder;

}
@end

