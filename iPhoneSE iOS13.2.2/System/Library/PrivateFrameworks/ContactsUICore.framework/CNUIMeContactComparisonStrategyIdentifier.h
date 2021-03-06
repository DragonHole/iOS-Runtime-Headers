/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNMeContactComparisonStrategy.h>

@class NSString;

@interface CNUIMeContactComparisonStrategyIdentifier : NSObject <CNMeContactComparisonStrategy> {

	NSString* _meContactIdentifierFound;

}

@property (nonatomic,retain) NSString * meContactIdentifierFound;              //@synthesize meContactIdentifierFound=_meContactIdentifierFound - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isMeContact:(id)arg1 ;
-(id)meContactIdentifiers;
-(void)meContactChangedInStore:(id)arg1 ;
-(void)setMeContactIdentifierFound:(NSString *)arg1 ;
-(NSString *)meContactIdentifierFound;
@end

