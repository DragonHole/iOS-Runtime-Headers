/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBIconViewProviding.h>

@class SBIconListView;

@interface SBIconListRotationIconViewProvider : NSObject <SBIconViewProviding> {

	SBIconListView* _listView;

}

@property (nonatomic,__weak,readonly) SBIconListView * listView;              //@synthesize listView=_listView - In the implementation block
-(SBIconListView *)listView;
-(id)dequeueReusableIconViewOfClass:(Class)arg1 ;
-(void)recycleIconView:(id)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg1 ;
-(void)configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(id)initWithListView:(id)arg1 ;
@end
