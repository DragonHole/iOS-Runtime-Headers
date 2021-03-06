/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTextBody, OADOrientedBounds, CMStyle;

@interface PMShapeTextMapper : CMMapper {

	OADTextBody* mTextBody;
	OADOrientedBounds* mBounds;
	CMStyle* mStyle;
	BOOL mRectangular;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3 ;
-(unsigned char)textAnchor;
-(void)setRectangular:(BOOL)arg1 ;
-(BOOL)isTableCellContent;
@end

