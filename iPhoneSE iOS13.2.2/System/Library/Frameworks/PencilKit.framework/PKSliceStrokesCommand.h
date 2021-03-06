/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PKModifyStrokesCommand.h>

@class NSDictionary;

@interface PKSliceStrokesCommand : PKModifyStrokesCommand {

	NSDictionary* _substrokes;

}

@property (nonatomic,readonly) NSDictionary * substrokes;              //@synthesize substrokes=_substrokes - In the implementation block
-(id)description;
-(void)applyToDrawing:(id)arg1 ;
-(id)invertedInDrawing:(id)arg1 ;
-(id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2 substrokes:(id)arg3 strokesHidden:(id)arg4 hiding:(BOOL)arg5 ;
-(NSDictionary *)substrokes;
@end

