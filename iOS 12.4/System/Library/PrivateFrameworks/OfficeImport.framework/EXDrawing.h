/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXDrawing : NSObject
+(id)readTwoCellAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readOneCellAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readAbsoluteAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFromPart:(id)arg1 state:(id)arg2 ;
+(EDCellAnchorMarker)readAnchorMarkerFromNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readDrawableNode:(xmlNode*)arg1 anchor:(id)arg2 state:(id)arg3 ;
+(void)initialize;
@end

