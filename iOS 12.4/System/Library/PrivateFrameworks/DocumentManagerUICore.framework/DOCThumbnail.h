/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage, NSOperation;


@protocol DOCThumbnail <NSObject>
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL isRepresentativeIcon; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,readonly) NSOperation * operation; 
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail; 
@required
-(void)addListener:(id)arg1;
-(BOOL)isRepresentativeIcon;
-(BOOL)hasFinishedTryingToFetchCorrectThumbnail;
-(void)scheduleUpdateIfNeeded;
-(void)removeListener:(id)arg1;
-(NSOperation *)operation;
-(UIImage *)thumbnail;
-(BOOL)isLoading;

@end
