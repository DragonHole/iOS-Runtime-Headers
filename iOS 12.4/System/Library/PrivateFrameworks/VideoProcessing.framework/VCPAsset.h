/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary, NSDate, VCPFingerprint, NSString, NSURL;

@interface VCPAsset : NSObject

@property (nonatomic,readonly) BOOL isPano; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (nonatomic,readonly) BOOL isScreenshot; 
@property (nonatomic,readonly) BOOL isHDR; 
@property (nonatomic,readonly) BOOL isSDOF; 
@property (nonatomic,readonly) NSDictionary * exif; 
@property (nonatomic,readonly) BOOL hadFlash; 
@property (nonatomic,readonly) float exposureTimeSeconds; 
@property (nonatomic,readonly) float photoOffsetSeconds; 
@property (nonatomic,readonly) BOOL isSlowmo; 
@property (nonatomic,readonly) BOOL isTimelapse; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) float slowmoRate; 
@property (nonatomic,readonly) float timelapseRate; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) VCPFingerprint * fingerprint; 
@property (nonatomic,readonly) BOOL isImage; 
@property (nonatomic,readonly) BOOL isMovie; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSURL * mainFileURL; 
+(void)unimplementedExceptionForMethodName:(id)arg1 ;
-(VCPFingerprint *)fingerprint;
-(long long)mediaType;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(BOOL)isImage;
-(BOOL)isMovie;
-(BOOL)isHDR;
-(BOOL)isSDOF;
-(NSURL *)mainFileURL;
-(unsigned long long)mediaSubtypes;
-(BOOL)isLivePhoto;
-(BOOL)isTimelapse;
-(NSDictionary *)exif;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(BOOL)hadFlash;
-(float)exposureTimeSeconds;
-(float)photoOffsetSeconds;
-(BOOL)isSlowmo;
-(float)slowmoRate;
-(float)timelapseRate;
-(id)originalMovie;
-(BOOL)isPano;
-(id)movie;
-(double)duration;
-(NSString *)localIdentifier;
-(NSDate *)modificationDate;
-(BOOL)isScreenshot;
@end
