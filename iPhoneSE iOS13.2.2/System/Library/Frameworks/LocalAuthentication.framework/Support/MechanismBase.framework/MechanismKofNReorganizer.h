/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MechanismBase/MechanismBase.h>

@class NSNumber;

@interface MechanismKofNReorganizer : MechanismBase {

	/*^block*/id _apply;
	long long _min;
	long long _max;
	NSNumber* _k;

}

@property (nonatomic,readonly) long long min;               //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) long long max;               //@synthesize max=_max - In the implementation block
@property (k,nonatomic,readonly) NSNumber * k;              //@synthesize k=_k - In the implementation block
-(long long)max;
-(long long)min;
-(NSNumber *)k;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithMin:(long long)arg1 max:(long long)arg2 k:(id)arg3 apply:(/*^block*/id)arg4 ;
-(id)reorganizeMechanisms:(id)arg1 k:(long long)arg2 error:(id*)arg3 ;
@end
