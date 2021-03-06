/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMWhiteBalanceCommand : CAMCaptureCommand {

	BOOL __matchExposureMode;
	long long __whiteBalanceMode;

}

@property (nonatomic,readonly) BOOL _matchExposureMode;                  //@synthesize _matchExposureMode=__matchExposureMode - In the implementation block
@property (nonatomic,readonly) long long _whiteBalanceMode;              //@synthesize _whiteBalanceMode=__whiteBalanceMode - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(id)initWithWhiteBalanceMode:(long long)arg1 ;
-(id)initWithMatchExposureMode;
-(long long)_whiteBalanceMode;
-(BOOL)_matchExposureMode;
-(id)_descriptionForWhiteBalanceMode:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

