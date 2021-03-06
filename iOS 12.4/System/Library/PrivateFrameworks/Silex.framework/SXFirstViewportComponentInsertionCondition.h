/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentInsertionCondition.h>

@class NSString;

@interface SXFirstViewportComponentInsertionCondition : NSObject <SXComponentInsertionCondition> {

	BOOL _allowFirstViewportException;

}

@property (assign,nonatomic) BOOL allowFirstViewportException;              //@synthesize allowFirstViewportException=_allowFirstViewportException - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3 ;
-(id)initWithAllowFirstViewportException:(BOOL)arg1 ;
-(BOOL)allowFirstViewportException;
-(void)setAllowFirstViewportException:(BOOL)arg1 ;
-(id)init;
@end

