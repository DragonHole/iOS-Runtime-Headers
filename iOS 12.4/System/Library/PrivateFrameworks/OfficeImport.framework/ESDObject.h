/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ESDContainer;

@interface ESDObject : NSObject {

	EshObject* mEshObject;
	ESDContainer* mParent;
	BOOL mIsChart;

}
-(EshObject*)eshObject;
-(EshGroup*)eshGroup;
-(int)shapeID;
-(EshShape*)eshShape;
-(BOOL)isChart;
-(id)initFromReader:(OcReader*)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3 ;
-(void)setChart:(BOOL)arg1 ;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(void)writeToWriter:(OcWriter*)arg1 ;
-(id)ebInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
-(id)pbInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
-(void)dealloc;
-(id)initWithType:(unsigned short)arg1 ;
-(id)parent;
@end
