/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {

	int mType;
	int mPresetType;
	NSMutableArray* mAdjustments;

}
-(id)adjustments;
-(int)presetType;
-(void)setPresetType:(int)arg1 ;
-(void)addAdjustment:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
@end

