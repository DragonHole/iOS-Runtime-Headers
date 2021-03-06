/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface PVPMR : NSObject {

	BOOL gPVPMR_ENABLED;
	NSMutableString* _buffer;

}
+(id)sharedInstance;
-(int)getLevel;
-(id)reportPMR:(double)arg1 pmrKey:(id)arg2 pmrComment:(id)arg3 ;
-(void)writePMRInfoToBuffer:(id)arg1 ;
-(void)writeBufferToPermanentStorage;
-(void)writePMRInfoToFile:(id)arg1 pmrString:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setLevel:(int)arg1 ;
@end

