//
//  ZBJCalendarCell.h
//  ZBJCalendar
//
//  Created by wanggang on 2/24/16.
//  Copyright © 2016 ZBJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZBJCalendarCell : UICollectionViewCell

@property (nonatomic, strong) NSDate *day;
@property (nonatomic, assign) BOOL isToday;
@property (nonatomic, assign) BOOL firstDayShowMonth;

@end
