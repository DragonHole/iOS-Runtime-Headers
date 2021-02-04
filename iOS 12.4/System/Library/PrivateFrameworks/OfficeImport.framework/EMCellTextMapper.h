/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class EDString, EDStyle;

@interface EMCellTextMapper : CMMapper {

	EDString* edString;
	EDStyle* edStyle;

}
+(double)contentWidthForString:(id)arg1 style:(id)arg2 ;
-(id)initWithEDString:(id)arg1 style:(id)arg2 parent:(id)arg3 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 columnWidth:(double)arg3 height:(double)arg4 spreadLeft:(BOOL)arg5 ;
-(void)mapVerticalTextAt:(id)arg1 withState:(id)arg2 width:(double)arg3 height:(double)arg4 ;
-(void)mapTextRunsAt:(id)arg1 ;
-(double)contentWidth;
@end
