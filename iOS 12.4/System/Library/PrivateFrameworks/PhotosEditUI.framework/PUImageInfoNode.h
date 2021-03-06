/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol PUImageInfoNode <PXRunNode>
@property (nonatomic,readonly) NSURL * imageDataURL; 
@property (nonatomic,readonly) NSString * imageDataUTI; 
@property (nonatomic,readonly) BOOL useEmbeddedPreview; 
@property (nonatomic,readonly) long long imageExifOrientation; 
@required
-(NSURL *)imageDataURL;
-(NSString *)imageDataUTI;
-(BOOL)useEmbeddedPreview;
-(long long)imageExifOrientation;

@end

