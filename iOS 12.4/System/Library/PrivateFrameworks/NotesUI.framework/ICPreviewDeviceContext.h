/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ICPreviewDeviceContext : NSObject {

	NSArray* _deviceScales;
	NSArray* _scalableDeviceInfo;
	NSArray* _nonScalableDeviceInfo;

}

@property (copy) NSArray * scalableDeviceInfo;                 //@synthesize scalableDeviceInfo=_scalableDeviceInfo - In the implementation block
@property (copy) NSArray * nonScalableDeviceInfo;              //@synthesize nonScalableDeviceInfo=_nonScalableDeviceInfo - In the implementation block
@property (readonly) NSArray * deviceScales; 
@property (readonly) double maxDeviceScale; 
+(id)sharedContext;
-(double)maxSizeOfPreviewDeviceInfoImage;
-(id)deviceInfoScalable:(BOOL)arg1 ;
-(NSArray *)deviceScales;
-(void)screensChangedNotification:(id)arg1 ;
-(NSArray *)scalableDeviceInfo;
-(void)setScalableDeviceInfo:(NSArray *)arg1 ;
-(NSArray *)nonScalableDeviceInfo;
-(void)setNonScalableDeviceInfo:(NSArray *)arg1 ;
-(double)maxDeviceScale;
-(id)init;
-(void)dealloc;
@end

