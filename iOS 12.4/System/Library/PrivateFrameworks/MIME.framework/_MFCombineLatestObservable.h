/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>

@class NSArray;

@interface _MFCombineLatestObservable : MFObservable {

	NSArray* _observables;

}

@property (nonatomic,copy) NSArray * observables;              //@synthesize observables=_observables - In the implementation block
-(id)initWithObservables:(id)arg1 ;
-(NSArray *)observables;
-(id)subscribe:(id)arg1 ;
-(void)setObservables:(NSArray *)arg1 ;
@end

