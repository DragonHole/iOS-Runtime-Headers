/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SnapshotTimer : NSObject {

	BOOL taskIsComplete;

}

@property (assign,nonatomic) BOOL taskIsComplete; 
+(void)takeSnapshotForTask:(id)arg1 ;
-(id)init;
-(void)checkout;
-(void)checkinWithTimeout:(double)arg1 forTask:(id)arg2 ;
-(BOOL)taskIsComplete;
-(void)setTaskIsComplete:(BOOL)arg1 ;
@end

