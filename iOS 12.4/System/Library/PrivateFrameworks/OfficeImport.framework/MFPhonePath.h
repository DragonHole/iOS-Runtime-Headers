/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPath.h>

@class OITSUBezierPath;

@interface MFPhonePath : MFPath {

	OITSUBezierPath* m_path;
	int m_state;

}
-(BOOL)isOpen;
-(int)stroke:(id)arg1 ;
-(int)flatten;
-(int)closeFigure;
-(int)abort;
-(int)widen:(id)arg1 ;
-(int)fill:(id)arg1 ;
-(id)initWithPath:(id)arg1 state:(int)arg2 ;
-(void)appendBezierPath:(id)arg1 dc:(id)arg2 ;
-(id)getBezierPath;
-(id)init;
-(void)dealloc;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)begin;
-(int)end;
-(CGPoint)currentPoint;
@end
