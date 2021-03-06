/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSInvalidatable;
@class NSString;

@interface RBStateCaptureItem : NSObject {

	id<BSInvalidatable> _invalidatable;
	/*^block*/id _block;
	NSString* _title;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) id block;                           //@synthesize block=_block - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(id)block;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3 ;
@end

