/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSDictionary, NSMutableURLRequest, NSURLResponse, NSURLRequest, NSObject, NSMutableData, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestor;

@interface AVAssetResourceLoadingRequestInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReference* weakReferenceToResourceLoader;
	OpaqueFigCustomURLLoaderRef customURLLoader;
	OpaqueFigCustomURLHandlerRef customURLHandler;
	CFDictionaryRef requestInfo;
	unsigned long long requestID;
	long long responseInfoSentOnceToken;
	NSDictionary* requestDictionary;
	NSMutableURLRequest* URLRequest;
	NSURLResponse* response;
	NSURLRequest* redirect;
	NSObject*<OS_dispatch_queue> dataCachingQueue;
	NSMutableData* cachedData;
	NSDictionary* cachedContentInformation;
	AVAssetResourceLoadingContentInformationRequest* contentInformationRequest;
	AVAssetResourceLoadingDataRequest* dataRequest;
	int finished;
	int cancelled;
	int sentContentInfo;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	OpaqueFigAssetImageGeneratorRef figImageGenerator;
	OpaqueFigAssetRef figAsset;
	/*^block*/id streamingKeyRequestCompletionHandler;
	OpaqueFigCPECryptorRef figCryptor;
	AVAssetResourceLoadingRequestor* requestor;
	unsigned long long cryptorKeyRequestID;

}
@end
